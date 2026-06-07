try:
    def f():
        try:
            res = int("9")
            return 42
        except KeyboardInterrupt: return 4
        except ValueError: return 2
        else: return 35
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
