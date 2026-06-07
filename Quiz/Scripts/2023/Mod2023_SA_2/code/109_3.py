try:
    def f():
        try:
            res = 0<=5
        except TypeError: return 6
        except ZeroDivisionError: return 9
        else: return 35
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
