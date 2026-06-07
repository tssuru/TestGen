try:
    
    try:
        print(9, end="")
        print(0<8, end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
