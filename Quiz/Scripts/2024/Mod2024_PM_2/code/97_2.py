try:
    def f():
        try:
            res = int("a2")
            return 44
        except TypeError: return 1
        except KeyboardInterrupt: return 7
        return res
    
    print(f())
    
except: print('error')
