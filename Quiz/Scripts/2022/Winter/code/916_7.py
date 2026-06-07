try:
    
    try:
        print(6, end="")
        print(int("c8"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
