try:
    def f():
        try:
            res = 6<4
        except KeyboardInterrupt: return 2
        except Exception: return 0
        return res
    
    print(f())
    
except: print('error')
