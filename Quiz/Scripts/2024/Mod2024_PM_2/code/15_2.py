try:
    def f():
        try:
            res = 7==3
        except TypeError: return 0
        except ZeroDivisionError: return 2
        else: return 34
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
