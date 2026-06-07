try:
    def f():
        try:
            res = 0<=4
            return 40
        except ZeroDivisionError: return 4
        except TypeError: return 6
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
