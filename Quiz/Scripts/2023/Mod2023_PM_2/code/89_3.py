try:
    def f():
        try:
            res = int(9/0.0)
            return 42
        except ValueError: return 5
        except ZeroDivisionError: return 1
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
