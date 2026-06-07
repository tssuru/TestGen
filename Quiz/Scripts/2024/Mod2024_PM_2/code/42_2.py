try:
    def f():
        try:
            res = int(4//1)
        except BaseException: return 3
        except ZeroDivisionError: return 8
        else: return 34
        return res
    
    print(f())
    
except: print('error')
