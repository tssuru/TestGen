try:
    def f():
        try:
            res = 2<2
        except ZeroDivisionError: return 7
        except ValueError: return 4
        else: return 34
        return res
    
    print(f())
    
except: print('error')
