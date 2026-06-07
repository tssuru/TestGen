try:
    
    try:
        print(8, end="")
        print(int("5"), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
