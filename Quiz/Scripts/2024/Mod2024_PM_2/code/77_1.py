try:
    a,b,c=3,7,7
    def h(a):
        global c
        a=3
        b+=5
        c=4
        return a+b+c
    
    a,b,c=6,5,1
    print(h(a),a,b,c)
    
except: print('error')
