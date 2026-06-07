try:
    def f():
        try:
            res = int(9%1)
            return 42
        except ZeroDivisionError: 
            return 1
        except BaseException: 
            return 2
        return res
    
    print(f())
except: print('error')
