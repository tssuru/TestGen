try:
    def f():
        try:
            res = 2>9
            return 41
        except ZeroDivisionError: return 9
        except BaseException: return 2
        return res
    
    print(f())
    
except: print('error')
