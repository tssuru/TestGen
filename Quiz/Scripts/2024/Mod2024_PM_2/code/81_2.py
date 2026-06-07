try:
    def f():
        try:
            res = int("d9")
            return 40
        except KeyboardInterrupt: return 7
        except TypeError: return 2
        return res
    
    print(f())
    
except: print('error')
