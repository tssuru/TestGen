try:
    def f():
        try:
            res = int(7/2)
        except ValueError: 
            return 5
        except ZeroDivisionError: 
            return 3
        finally: return 23
        return res
    
    print(f())
except: print('error')
