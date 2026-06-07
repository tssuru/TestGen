try:
    
    try:
        print(3, end="")
        print(int("c4"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
