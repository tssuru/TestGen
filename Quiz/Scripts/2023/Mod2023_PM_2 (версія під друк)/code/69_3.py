try:
    def f():
        try:
            res = 7>2
        except KeyboardInterrupt: return 3
        except TypeError: return 8
        return res
    
    print(f())
    
except: print('error')
