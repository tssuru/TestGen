try:
    def f():
        try:
            res = int(5/0.0)
            return 45
        except TypeError: return 9
        except ValueError: return 1
        else: return 33
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
