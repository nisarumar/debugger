//
// Created by umar on 03.03.24.
//

#ifndef DBG_DBG_H
#define DBG_DBG_H

namespace dbg {
	struct dbg_data;
	class debugger {
		std::unique_ptr<dbg_data>p_dbg_data;
	public:
		debugger(dbg_data&&);
		~debugger();
		debugger(debugger&& rhs);
		debugger& operator=(debugger&& rhs);
		debugger(const debugger& rhs);
		debugger& operator=(const debugger& rhs);
		void event_loop();
		void dispatcher(const std::string &);
		void continue_execution();
	};
}
#endif //DBG_DBG_H
