#ifndef MSR_SUPPLEMENTAL_H
#define MSR_SUPPLEMENTAL_H

#define MSR_RAPL_DOMAIN_BASE(domain) MSR_RAPL_BASE_ ## domain

#define MSR_RAPL_POWER_LIMIT(domain) MSR_RAPL_DOMAIN_BASE(domain)
#define MSR_RAPL_ENERGY_STATUS(domain) (MSR_RAPL_DOMAIN_BASE(domain) + 1)
#define MSR_RAPL_POLICY(domain) (MSR_RAPL_DOMAIN_BASE(domain) + 2)
#define MSR_RAPL_PERF_STATUS(domain) (MSR_RAPL_DOMAIN_BASE(domain) + 3)
#define MSR_RAPL_POWER_INFO(domain) (MSR_RAPL_DOMAIN_BASE(domain) + 4)

#define MSR_RAPL_BASE_PKG	0x610
#define MSR_RAPL_BASE_DRAM	0x618
#define MSR_RAPL_BASE_PP0	0x638
#define MSR_RAPL_BASE_PP1	0x640

#endif /* MSR_SUPPLEMENTAL_H */
