try:
    def f():
        try:
            res = int(9//0.0)
        except BaseException: return 5
        except Exception: return 1
        return res
    
    print(f())
    
except: print('error')
