AUTOMAKE_OPTIONS=foreign subdir-objects

proj_dir = ${top_srcdir}/..
top_dir = ${proj_dir}/../..
center_rootdir = ${proj_dir}/rpc_center
server_rootdir = ${proj_dir}/rpc_server
client_rootdir = ${proj_dir}/rpc_client
config_parser = ${proj_dir}/config_parser
center_proto = ${proj_dir}/center_proto
util_dir = ${proj_dir}/util
ut_dir = ${proj_dir}/unit_test
third_dir = ${top_dir}/third-64

AM_CPPFLAGS = -I${proj_dir}/ \
              -I${third_dir}/gperftools/include/ \
			  -I${third_dir}/protobuf/include/ \
			  -I${third_dir}/libev/include/

#AM_LDFLAGS = -lz -lrt
#AM_LDFLAGS = -lz -lstdc++ -lprotobuf
AM_LDFLAGS = -lz -lstdc++

LDADD = ${third_dir}/protobuf/lib/*.a \
		${third_dir}/libev/lib/*.a

RPC_SRC = ${config_parser}/config_parser.h \
		  ${config_parser}/config_parser.cpp \
		  ${config_parser}/dictionary.h \
		  ${config_parser}/dictionary.cpp \
		  ${config_parser}/iniparser.h \
		  ${config_parser}/iniparser.cpp \
		  ${util_dir}/rpc_util.h \
		  ${util_dir}/rpc_util.cpp \
		  ${util_dir}/thread.h \
		  ${util_dir}/pthread_mutex.h \
		  ${util_dir}/pthread_rwlock.h \
		  ${util_dir}/disallow_copy_and_assign.h \
		  ${util_dir}/rpc_communication.h \
		  ${util_dir}/rpc_communication.cpp \
		  ${center_proto}/center_cluster.pb.h \
		  ${center_proto}/center_cluster.pb.cc \
		  ${center_proto}/center_client.pb.h \
		  ${center_proto}/center_client.pb.cc \
		  ${center_proto}/centers.pb.h \
		  ${center_proto}/centers.pb.cc \
		  ${center_proto}/center_type.pb.h \
		  ${center_proto}/center_type.pb.cc

RPC_SERVER = ${server_rootdir}/rpc_server.h \
			 ${server_rootdir}/rpc_server.cpp \
			 ${server_rootdir}/dispatch_thread.h \
			 ${server_rootdir}/dispatch_thread.cpp \
			 ${server_rootdir}/libev_thread_pool.h \
			 ${server_rootdir}/libev_thread_pool.cpp \
			 ${server_rootdir}/connection_timer_manager.h \
			 ${server_rootdir}/connection_timer_manager.cpp \
			 ${server_rootdir}/center_cluster_heartbeat.h \
			 ${server_rootdir}/center_cluster_heartbeat.cpp \
			 ${server_rootdir}/rpc_heartbeat_server.h \
			 ${server_rootdir}/rpc_heartbeat_server.cpp


RPC_CENTER = ${center_rootdir}/rpc_center.h \
			 ${center_rootdir}/rpc_center.cpp \
			 ${center_rootdir}/reporter_thread.h \
			 ${center_rootdir}/reporter_thread.cpp \
			 ${center_rootdir}/leader_thread.h \
			 ${center_rootdir}/leader_thread.cpp \
			 ${center_rootdir}/election_thread.h \
			 ${center_rootdir}/election_thread.cpp \
			 ${center_rootdir}/center_server_thread.h \
			 ${center_rootdir}/center_server_thread.cpp \
			 ${center_rootdir}/load_balancer/load_balancer.h \
			 ${center_rootdir}/load_balancer/consistent_hash_load_balancer.h \
			 ${center_rootdir}/load_balancer/consistent_hash_load_balancer.cpp

# LTP = ${ut_dir}/test_libev_tp.cpp ${util_dir}/pthread_mutex.h ${server_rootdir}/libev_thread_pool.h ${server_rootdir}/libev_thread_pool.cpp

#bin_PROGRAMS = ltp_client ltp_server
#bin_PROGRAMS = ltp_test
bin_PROGRAMS = cc_client cc_center

LTP_CLIENT = ${ut_dir}/test_hb_client.cc ${RPC_SRC} \
			 ${client_rootdir}/rpc_heartbeat_client.h \
			 ${client_rootdir}/rpc_heartbeat_client.cpp
ltp_client_SOURCES = ${LTP_CLIENT}

LTP_SERVER = ${ut_dir}/test_hb_server.cc ${RPC_SRC} ${RPC_SERVER}
ltp_server_SOURCES = ${LTP_SERVER}

LTP_TEST = ${ut_dir}/test_libev_tp.cc ${RPC_SRC} ${RPC_SERVER}
ltp_test_SOURCES = ${LTP_TEST}

CC_CLIENT_TEST = ${ut_dir}/center_test/client_test.cc ${RPC_SRC} \
				 ${client_rootdir}/center_client_heartbeat.h \
				 ${client_rootdir}/center_client_heartbeat.cpp
cc_client_SOURCES = ${CC_CLIENT_TEST}


CC_CENTER_TEST = ${ut_dir}/center_test/center_test.cc \
				 ${RPC_SRC} \
				 ${RPC_SERVER} \
				 ${RPC_CENTER}
cc_center_SOURCES = ${CC_CENTER_TEST}



#SUBDIRS = test
