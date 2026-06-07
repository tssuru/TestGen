try:
    a,b,c=3,1,6
    def h(a):
        a*=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=4,9,5
    print(h(a),a,b,c)
    
except: print('error')
