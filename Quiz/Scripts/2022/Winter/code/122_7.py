try:
    
    try:
        print(0, end="")
        print(int("c8"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except Exception: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
