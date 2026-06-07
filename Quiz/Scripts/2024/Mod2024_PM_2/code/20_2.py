try:
    def f():
        try:
            res = int(8/0)
        except ZeroDivisionError: return 3
        except ValueError: return 2
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
