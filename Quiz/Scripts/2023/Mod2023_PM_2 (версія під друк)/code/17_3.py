try:
    def f():
        try:
            res = 7<=2
        except KeyboardInterrupt: return 5
        except Exception: return 8
        return res
    
    print(f())
    
except: print('error')
