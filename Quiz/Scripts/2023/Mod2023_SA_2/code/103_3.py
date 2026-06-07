try:
    def f():
        try:
            res = int(3%0.0)
        except KeyboardInterrupt: return 6
        except TypeError: return 8
        return res
    
    print(f())
    
except: print('error')
