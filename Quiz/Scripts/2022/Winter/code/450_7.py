try:
    
    try:
        print(4, end="")
        print(int("a5"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
