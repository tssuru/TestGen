try:
    def f():
        try:
            res = int(4/0)
            return 42
        except ZeroDivisionError: return 5
        except ValueError: return 6
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
