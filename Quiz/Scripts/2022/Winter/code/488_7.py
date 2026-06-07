try:
    
    try:
        print(8, end="")
        print(int("c0"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
