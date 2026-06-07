try:
    
    try:
        print(0, end="")
        print(int("9"), end="")
        print(5, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
