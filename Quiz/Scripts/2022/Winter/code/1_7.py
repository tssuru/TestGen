try:
    
    try:
        print(2, end="")
        print(int("9"), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
