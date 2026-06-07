try:
    def f():
        try:
            res = 7>1
        except ZeroDivisionError: return 8
        except ValueError: return 0
        else: return 31
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
