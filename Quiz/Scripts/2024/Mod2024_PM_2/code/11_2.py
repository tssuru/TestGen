try:
    def f():
        try:
            res = int("9")
            return 45
        except KeyboardInterrupt: return 8
        except ValueError: return 2
        return res
    
    print(f())
    
except: print('error')
