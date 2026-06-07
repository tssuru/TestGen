try:
    def f():
        try:
            res = int("d1")
        except ValueError: return 3
        except KeyboardInterrupt: return 6
        else: return 31
        return res
    
    print(f())
    
except: print('error')
