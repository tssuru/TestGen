try:
    def f():
        try:
            res = 0<=7
        except ValueError: return 1
        except ZeroDivisionError: return 6
        else: return 34
        return res
    
    print(f())
    
except: print('error')
