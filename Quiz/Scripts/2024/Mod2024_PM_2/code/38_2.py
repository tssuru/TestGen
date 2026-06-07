try:
    def f():
        try:
            res = int(0//1)
        except ZeroDivisionError: return 8
        except BaseException: return 6
        return res
    
    print(f())
    
except: print('error')
