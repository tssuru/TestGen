try:
    def f():
        try:
            res = int("c1")
        except KeyboardInterrupt: 
            return 4
        except TypeError: 
            return 0
        else: return 31
        return res
    
    print(f())
except: print('error')
