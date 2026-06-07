try:
    def f():
        try:
            res = 2==9
            return 43
        except KeyboardInterrupt: return 7
        except Exception: return 3
        return res
    
    print(f())
    
except: print('error')
