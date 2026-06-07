try:
    def f():
        try:
            res = int(4/2)
        except ZeroDivisionError: return 0
        except ValueError: return 9
        else: return 35
        finally: return 20
        return res
    
    print(f())
    
except: print('error')
