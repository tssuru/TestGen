try:
    def f():
        try:
            res = int(0/2)
            return 44
        except ZeroDivisionError: return 8
        except TypeError: return 7
        else: return 31
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
