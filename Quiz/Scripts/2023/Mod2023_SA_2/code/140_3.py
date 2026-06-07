try:
    def f():
        try:
            res = 2!=0
            return 44
        except ZeroDivisionError: return 6
        except ValueError: return 7
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
