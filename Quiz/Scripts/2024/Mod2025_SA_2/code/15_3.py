try:
    def f():
        try:
            res = int(3//0)
        except Exception: 
            return 4
        except BaseException: 
            return 1
        else: return 32
        return res
    
    print(f())
except: print('error')
