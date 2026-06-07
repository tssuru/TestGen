try:
    a,b,c=5,8,9
    def h(a):
        a=5
        b+=1
        c=4
        return a+b+c
    
    a,b,c=2,3,4
    print(h(a),a,b,c)
    
except: print('error')
