//	Roast+ License

#ifndef __SFJP_ROAST_roast__memory__null_HPP__
#define __SFJP_ROAST_roast__memory__null_HPP__

namespace roast
{
	template <typename T=int>
	struct null_type_
	{
		static const T value = 0;
	};

	typedef null_type_<> null, null_type, NullType;

	//static const null_type null;
}

#endif//__SFJP_ROAST_roast__memory__null_HPP__
