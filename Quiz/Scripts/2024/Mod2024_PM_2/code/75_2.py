try:
    def f():
        try:
            res = 6>=1
            return 45
        except KeyboardInterrupt: return 3
        except BaseException: return 4
        return res
    
    print(f())
    
except: print('error')
