//	Roast+ License

#ifndef __SFJP_ROAST_roast__memory__null_HPP__
#define __SFJP_ROAST_roast__memory__null_HPP__

template <typename T=int>
struct null_
{
	static const T value = 0;
};

typedef null_<> null, null_type, NullType;
#endif//__SFJP_ROAST_roast__memory__null_HPP__
