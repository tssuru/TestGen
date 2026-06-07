try:
    
    try:
        print(0, end="")
        print(int("a8"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except Exception: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
