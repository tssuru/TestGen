try:
    def f():
        try:
            res = int(9/2)
        except BaseException: return 8
        except Exception: return 3
        return res
    
    print(f())
    
except: print('error')
