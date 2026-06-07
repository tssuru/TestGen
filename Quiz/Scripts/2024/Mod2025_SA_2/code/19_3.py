try:
    def f():
        try:
            res = int("d0")
        except ValueError: 
            return 4
        except TypeError: 
            return 6
        else: return 35
        finally: return 22
        return res
    
    print(f())
except: print('error')
