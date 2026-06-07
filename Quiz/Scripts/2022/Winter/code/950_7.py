try:
    
    try:
        print(9, end="")
        print(int("d0"), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
