try:
    def f():
        try:
            res = int("a5")
            return 42
        except ValueError: return 6
        except KeyboardInterrupt: return 3
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
